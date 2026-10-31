/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140190f4c */

undefined4 FUN_140190f4c(short *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_1401aeb80(param_4,0,param_1,0xffffffff,0,0,0,0);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          goto LAB_140190fa0;
        }
        iVar1 = FUN_1401aeb80(param_4,0,param_1,0xffffffff,*(undefined8 *)(param_2 + 0x10),
                              (int)*(ulonglong *)(param_2 + 0x18),0,0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_14019e914(DVar2);
      puVar3 = (undefined4 *)FUN_14019e8cc();
      return *puVar3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
LAB_140190fa0:
      puVar3 = (undefined4 *)FUN_14019e8cc();
      *puVar3 = 0x22;
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}

