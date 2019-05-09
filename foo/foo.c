#include <linux/module.h>
#include <linux/module.h>

MODULE_AUTHOR("Sachin Boban");
MODULE_LICENSE("GPL");

/*
 * @brief Module Initialization
 *
 * Initialize the foo module
 */
static int __init foo_init(void)
{
    printk(KERN_ALERT "foo: Init!");
    return 0;
}

/*
 * @brief Module de-initialization
 *
 * De-initialize the foo module
 */
static void __exit foo_exit(void)
{
    printk(KERN_ALERT "foo: Exiting!");
}

module_init(foo_init);
module_exit(foo_exit);
