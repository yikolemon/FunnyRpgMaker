/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140287184 */

void FUN_140287184(undefined1 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_c0 [56];
  undefined8 local_88;
  int local_80;
  undefined1 local_78 [8];
  undefined4 local_70;
  int local_58 [2];
  undefined8 local_50;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1402136e8();
  local_88 = 0xffff00000000;
  puVar3 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  local_80 = FUN_14044b720(puVar3,local_78,3,0xffffffff);
  FUN_1402139b2(&local_88,local_80,local_78);
  iVar1 = local_80;
  local_50 = FUN_1402136e8();
  local_58[0] = iVar1;
  iVar2 = (int)local_88;
  if ((int)local_88 == 0) {
    if (iVar1 == 0) goto LAB_140287274;
  }
  else {
    FUN_1402136e8();
    if (iVar2 == 1) {
LAB_140287274:
      FUN_140214a5a(local_58,param_2);
      FUN_14028733b(local_78,"m resources",local_58);
      FUN_140287392(local_c0,local_78);
                    /* WARNING: Subroutine does not return */
      FUN_14047ea80(local_c0,0x1405b7910);
    }
    puVar3 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    iVar2 = FUN_14044b720(puVar3,local_78,9,0xffffffff);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = local_70;
      FUN_140287600(param_1,param_2);
      *(undefined4 *)(param_1 + 0x28) = *param_3;
      *param_1 = 1;
      return;
    }
    FUN_14027e1bf("yout multiple items on a same line",iVar2,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021366a(&DAT_140573d72,local_58,param_2);
}

