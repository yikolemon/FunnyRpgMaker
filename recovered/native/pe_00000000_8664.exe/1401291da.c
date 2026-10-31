/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401291da */

ulonglong FUN_1401291da(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                       char param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_14012ebc7(param_1,param_3);
  if (*plVar2 == 0) {
    puVar3 = (undefined8 *)FUN_14012afda(param_4,0x10,&local_3c);
    uVar4 = (ulonglong)local_3c;
    if (local_3c == 0) {
      *plVar2 = (longlong)puVar3;
      *puVar3 = param_1;
      puVar3[1] = param_2;
      uVar1 = param_3[2];
      if (*param_3 <= uVar1) {
        uVar4 = FUN_14012ec5d(param_3,param_4);
        if ((int)uVar4 != 0) goto LAB_140129271;
        uVar1 = param_3[2];
      }
      param_3[2] = uVar1 + 1;
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
    if (param_5 != '\0') {
      *(undefined8 *)(*plVar2 + 8) = param_2;
    }
  }
LAB_140129271:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

