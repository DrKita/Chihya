#ifndef _SEC_ARGOS_H
#define _SEC_ARGOS_H

extern void exynos_dm_hotplug_enable(void);
extern void exynos_dm_hotplug_disable(void);

extern int sec_argos_register_notifier(struct notifier_block *n, char *label);
extern int sec_argos_unregister_notifier(struct notifier_block *n, char *label);

#endif
