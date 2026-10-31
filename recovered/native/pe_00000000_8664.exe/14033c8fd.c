/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033c8fd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033c8fd(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  
  lVar3 = DAT_14062a630;
  iVar6 = *(int *)(DAT_14062a630 + 0x2ad0) + -1 + (uint)(*(int *)(DAT_14062a630 + 0x2ad0) == 0);
  lVar1 = DAT_14062a630 + 0x2ad0;
  if (*(char *)(DAT_14062a630 + 0x20) == '\0') {
    FUN_1403115ca(lVar1,
                  ".apply(this, arguments);\n                reject(\"XMLHttpRequest ontimeout\");\n            };\n            this.onabort = function () {\n                orig_onabort.apply(this, arguments);\n                reject(\"XMLHttpRequest onabort\");\n            };\n            orig_send.apply(this, arguments);\n        };\n        DataManager.loadDataFile(name, src);\n        XMLHttpRequest.prototype.send = orig_send;\n    });\n}\n"
                  ,*(undefined4 *)(DAT_14062a630 + 4));
  }
  else {
    FUN_1403115ca(lVar1,
                  "meout.apply(this, arguments);\n                reject(\"XMLHttpRequest ontimeout\");\n            };\n            this.onabort = function () {\n                orig_onabort.apply(this, arguments);\n                reject(\"XMLHttpRequest onabort\");\n            };\n            orig_send.apply(this, arguments);\n        };\n        DataManager.loadDataFile(name, src);\n        XMLHttpRequest.prototype.send = orig_send;\n    });\n}\n"
                  ,DAT_14062a630 + 0x20);
  }
  FUN_14031161e(lVar1,param_1,param_2);
  puVar5 = *(undefined **)(lVar3 + 0x2ad8);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &DAT_14062a638;
  }
  FUN_140311736(lVar3 + 0x2ae0,puVar5,iVar6,
                *(int *)(lVar3 + 0x2ad0) + -1 + (uint)(*(int *)(lVar3 + 0x2ad0) == 0));
  puVar5 = *(undefined **)(lVar3 + 0x2ad8);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &DAT_14062a638;
  }
  uVar4 = *(uint *)(lVar3 + 0x2acc);
  if ((uVar4 >> 0x14 & 1) != 0) {
    FUN_14033ca09("opup",puVar5 + iVar6);
    uVar4 = *(uint *)(lVar3 + 0x2acc);
  }
  pcVar2 = ram0x00014059e108;
  if ((uVar4 >> 0x15 & 1) == 0) {
    return;
  }
  (*ram0x00014059e108)
            (
            "orig_ontimeout.apply(this, arguments);\n                reject(\"XMLHttpRequest ontimeout\");\n            };\n            this.onabort = function () {\n                orig_onabort.apply(this, arguments);\n                reject(\"XMLHttpRequest onabort\");\n            };\n            orig_send.apply(this, arguments);\n        };\n        DataManager.loadDataFile(name, src);\n        XMLHttpRequest.prototype.send = orig_send;\n    });\n}\n"
            );
  (*pcVar2)(puVar5 + iVar6);
  return;
}

