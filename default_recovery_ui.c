/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <linux/input.h>

#include "recovery_ui.h"
#include "common.h"
#include "extendedcommands.h"

char* MENU_HEADERS[] = { NULL };

char* MENU_ITEMS[] = { "重启系统",
                       "从sd卡上选择zip卡刷包",
                       "使用sideload安装zip卡刷包",
                       "清空数据/恢复出厂",
                       "清空缓存",
                       "备份与还原",
                       "挂载与存储",
                       "高级选项",
                       "关机",
                       NULL };


/* char* MENU_ITEMS[] = { "reboot system now",
 *                        "install zip from sdcard",
 *                        "install zip from sideload",
 *                        "wipe data/factory reset",
 *                        "wipe cache partition",
 *                        "backup and restore",
 *                        "mounts and storage",
 *                        "advanced",
 *                        "shutdown system",
 *                        NULL };
 */

void device_ui_init(UIParameters* ui_parameters) {
}

int device_recovery_start() {
    return 0;
}

int device_reboot_now(volatile char* key_pressed, int key_code) {
    return 0;
}

int device_perform_action(int which) {
    return which;
}

int device_wipe_data() {
    return 0;
}
