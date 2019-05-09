#include <linux/module.h>
#include <linux/module.h>

MODULE_AUTHOR("Sachin Boban");
MODULE_LICENSE("GPL");

/*
 * @brief Module Initialization
 *
 * Initialize the hello module
 */
static int __init hello_init(void)
{
    printk(KERN_ALERT "Hello World!");
    return 0;
}

/*
 * @brief Module de-initialization
 *
 * De-initialize the hello module
 */
static void __exit hello_exit(void)
{
    printk(KERN_ALERT "Exiting!");
}

module_init(hello_init);
module_exit(hello_exit);
