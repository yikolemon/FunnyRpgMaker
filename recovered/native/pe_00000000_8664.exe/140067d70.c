/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140067d70 */

undefined8 *
FUN_140067d70(undefined8 *param_1,undefined8 param_2,int param_3,int *param_4,char param_5,
             undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  iVar1 = *param_4;
  iVar4 = 0;
  if (iVar1 - param_3 == 0 || iVar1 < param_3) {
LAB_140067dda:
    uVar2 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
  }
  else {
    if (*(char *)((longlong)param_4 + 9) != '\0') {
      param_5 = *(char *)((longlong)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar5 = (iVar1 - param_3) / 2;
      iVar4 = (iVar1 - param_3) - iVar5;
    }
    else {
      if (param_5 != '\x02') {
        iVar4 = 0;
        if (param_5 == '\x01') {
          iVar4 = iVar1 - param_3;
        }
        goto LAB_140067dda;
      }
      iVar5 = iVar1 - param_3;
      iVar4 = 0;
    }
    uVar2 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    if (0 < iVar5) {
      uVar3 = iVar5 + 1;
      do {
        FUN_140065047(&local_58,param_4 + 4,(longlong)(param_4 + 4) + uVar2 * 2);
        uVar3 = uVar3 - 1;
        param_2 = local_50;
      } while (1 < uVar3);
    }
  }
  FUN_140067bb6(param_6,&local_58,param_2);
  if (0 < iVar4) {
    uVar3 = iVar4 + 1;
    do {
      FUN_140065047(&local_58,param_4 + 4,(longlong)param_4 + uVar2 * 2 + 0x10);
      uVar3 = uVar3 - 1;
      local_58 = local_50;
    } while (1 < uVar3);
  }
  *param_1 = local_58;
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

