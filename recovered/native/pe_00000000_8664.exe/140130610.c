/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130610 */

void FUN_140130610(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar5;
  int iVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == 0x6f75746c) || (iVar2 == 0x62697473)) {
      param_2 = param_2 * (uint)*(ushort *)(*(longlong *)(param_1[1] + 0x80) + 0x18);
      iVar4 = param_2 + 0x3ff;
      if (-1 < param_2) {
        iVar4 = param_2;
      }
      uVar3 = iVar4 >> 10;
      param_3 = param_3 * (uint)*(ushort *)(*(longlong *)(param_1[1] + 0x80) + 0x1a);
      iVar4 = param_3 + 0x3ff;
      if (-1 < param_3) {
        iVar4 = param_3;
      }
      uVar5 = iVar4 >> 10;
      if (iVar2 == 0x6f75746c) {
        FUN_14012c8db(param_1 + 0x13,uVar3,uVar5);
      }
      else {
        iVar2 = FUN_140183feb(param_1);
        if (iVar2 != 0) {
          return;
        }
        uVar5 = uVar5 & 0xffffffc0;
        uVar3 = uVar3 & 0xffffffc0;
        if (uVar3 == 0) {
          uVar3 = 0x40;
        }
        iVar2 = FUN_1401835f0(uVar1,param_1 + 0xd,uVar3,uVar5);
        if (iVar2 != 0) {
          return;
        }
      }
      if (*(int *)(param_1 + 0xb) != 0) {
        *(uint *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + uVar3;
      }
      if (*(int *)((longlong)param_1 + 0x5c) != 0) {
        *(uint *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + uVar5;
      }
      *(uint *)(param_1 + 6) = *(int *)(param_1 + 6) + uVar3;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + uVar5;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar3;
      *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + uVar5;
      *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + uVar5;
      if (*(int *)(param_1 + 0xc) == 0x62697473) {
        *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + ((int)uVar5 >> 6);
      }
    }
  }
  return;
}

