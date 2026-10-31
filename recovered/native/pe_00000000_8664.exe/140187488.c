/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140187488 */

int FUN_140187488(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  iVar3 = 0x28;
  if (param_2 != 0 && param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    local_34 = FUN_140187599(param_2);
    iVar3 = local_34;
    if (local_34 == 0) {
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[8] = 0;
      param_1[6] = uVar1;
      uVar2 = FUN_14012afda(uVar1,0x1108,&local_34);
      iVar3 = local_34;
      if (local_34 == 0) {
        local_34 = FUN_140187611(uVar2,param_1,param_2);
        if (local_34 != 0) {
          FUN_140128b39(uVar1,uVar2);
          iVar3 = local_34;
          goto LAB_140187563;
        }
        param_1[2] = uVar2;
      }
      param_1[1] = 0x7fffffff;
      *param_1 = 0;
      param_1[4] = &LAB_140187673;
      param_1[5] = FUN_14018767c;
    }
  }
LAB_140187563:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

