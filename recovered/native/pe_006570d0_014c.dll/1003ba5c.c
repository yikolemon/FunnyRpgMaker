/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003ba5c */

void __thiscall FUN_1003ba5c(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_58 [21];
  undefined1 local_43 [3];
  undefined4 local_40;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059fa0;
  local_1c = ExceptionList;
  local_24 = *(undefined4 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  ExceptionList = &local_1c;
  FUN_1003a106(6,param_1 + 4,param_4);
  uVar3 = local_24;
  local_14 = 0;
  iVar2 = __alldiv(local_24,uVar1,10000000,0);
  local_28 = iVar2 * -1000000;
  iVar2 = __alldiv(uVar3,uVar1,10,0);
  local_28 = iVar2 + local_28;
  iVar2 = 0x1f;
  if ((local_28 | 1) != 0) {
    for (; (local_28 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  local_24 = *(int *)(&DAT_102902d4 + iVar2 * 8) +
             (uint)CARRY4(*(uint *)(&DAT_102902d0 + iVar2 * 8),local_28);
  if (local_24 < 6) {
    do {
      iVar2 = param_4[1];
      uVar3 = iVar2 + 1;
      if ((uint)param_4[2] < uVar3) {
        local_14 = 0;
        (*(code *)param_4[3])(param_4,uVar3);
        iVar2 = param_4[1];
        uVar3 = iVar2 + 1;
      }
      param_4[1] = uVar3;
      *(undefined1 *)(*param_4 + iVar2) = 0x30;
      local_24 = local_24 + 1;
    } while (local_24 != 6);
  }
  local_14 = 0;
  local_40 = FUN_1002472e(local_58,local_28,0x15);
  FUN_1001909c(local_40,local_43);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

