/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fcef5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100fcef5(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined8 local_18;
  uint local_10;
  
  iVar2 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(char *)(DAT_1039d74c + 0x9e) == '\x01') {
    if (*(char *)(DAT_1039d74c + 0x278c) == '\x01') {
      if ((*(byte *)(DAT_1039d74c + 0x27b4) & 1) == 0) {
        *(int *)(DAT_1039d74c + 0x27d4) = *(int *)(DAT_1039d74c + 0x27d4) + 1;
      }
      else {
        FUN_100f99e6("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n",
                     *(undefined1 *)(DAT_1039d74c + 0x9d),1,*(undefined1 *)(DAT_1039d74c + 0x9f));
      }
    }
    if ((*(byte *)(iVar2 + 0x27b4) & 1) == 0) {
      *(int *)(iVar2 + 0x27d4) = *(int *)(iVar2 + 0x27d4) + 1;
    }
    else {
      if (iVar1 == 0) {
        pcVar4 = "NULL";
      }
      else {
        pcVar4 = *(char **)(iVar1 + 4);
      }
      FUN_100f99e6("[imgui-error] In window \'%s\': %s\n",pcVar4,param_1);
    }
  }
  *(undefined1 *)(iVar2 + 0x278c) = 0;
  if (*(char *)(iVar2 + 0x9f) == '\x01') {
    if (*(char *)(iVar2 + 1) == '\x01') {
      cVar3 = FUN_101148bc();
      if (cVar3 != '\0') {
        iVar5 = *(int *)(iVar2 + 0x2790);
        if (iVar5 < 0x14) {
          if (iVar1 == 0) {
            FUN_1012d08c("In window \'%s\': %s","NULL",param_1);
          }
          else {
            FUN_1012d08c("In window \'%s\': %s",*(undefined4 *)(iVar1 + 4),param_1);
            if ((*(char *)(iVar1 + 0x102) != '\x01') || (*(char *)(iVar1 + 0xfa) == '\x01')) {
              FUN_100fe900(*(undefined4 *)(iVar1 + 0x3c));
              local_18 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar1 + 0x58) >> 0x20) +
                                  (float)((ulonglong)*(undefined8 *)(iVar1 + 0x50) >> 0x20),
                                  (float)*(undefined8 *)(iVar1 + 0x58) +
                                  (float)*(undefined8 *)(iVar1 + 0x50));
              FUN_1018b762(iVar1 + 0x50,&local_18,_DAT_102b8a80,_UNK_102b8a84,_UNK_102b8a88,
                           _UNK_102b8a8c);
            }
          }
          iVar5 = *(int *)(iVar2 + 0x2790);
        }
        if (iVar5 == 0x14) {
          FUN_1012d08c("(and more errors)");
        }
        thunk_FUN_1010ad44();
      }
    }
    *(int *)(iVar2 + 0x2790) = *(int *)(iVar2 + 0x2790) + 1;
  }
  if (*(code **)(iVar2 + 0x277c) != (code *)0x0) {
    (**(code **)(iVar2 + 0x277c))(iVar2,*(undefined4 *)(iVar2 + 0x2780),param_1);
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    return *(undefined1 *)(iVar2 + 0x9d);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

