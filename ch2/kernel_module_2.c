#include <linux/list.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/slab.h>

struct birthday
{
    int day;
    int month;
    int year;
    struct list_head list;
    /* data */
};

void set_birthday(struct birthday *person, int day, int month, int year);

int simple_init(void)
{
    struct birthday *peter,*tom, *john, *mike, *sheldon;
    struct birthday *ptr;
    printk(KERN_INFO "lOADING Module\n");

    peter = kmalloc(sizeof(*peter), GFP_KERNEL);
    tom = kmalloc(sizeof(*tom), GFP_KERNEL);
    jhon = kmalloc(sizeof(*jhon), GFP_KERNEL);
    mike = kmalloc(sizeof(*mike), GFP_KERNEL);
    sheldon = kmalloc(sizeof(*sheldon), GFP_KERNEL);
}

void set_birthday(struct brithday *person, int day, int month, int year)
{
    person->day = day;
    person->month = month;
    person->year = year;
    INIT_LIST_HEAD(&person->list);
    list_add_tail(&person->list, &birthday_list);
}

void simple_exit(void){
    struct birthday *ptr, *next;
    printk(KERN_INFO "Removing Module\n");

    list_for_each_entry_safe(ptr, next, &birthday_list, list){
        printk(KERN_INFO "Removing day: %d, month: %d, year: %d \n", ptr->day, ptr->month, ptr->year);
        list_del(&ptr->list);
        kfree(ptr);
    }
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");