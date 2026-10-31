/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467d45 */

void __fastcall FUN_00467d45(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    puVar3 = *(uint **)(param_1 + 0x20);
    do {
      uVar1 = FUN_00467e0f(puVar3,param_2);
      if (((uVar1 != 0) || (uVar1 = FUN_00467e0f(puVar3,param_3), uVar1 != 0)) ||
         (uVar1 = FUN_00467e0f(puVar3,param_4), uVar1 != 0)) goto LAB_00467db9;
      puVar3 = puVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_00467c68((uint *)(param_1 + 0x18),param_5,(int *)&local_18);
  puVar3 = local_18;
  if (iVar2 == 0) {
LAB_00467db9:
    iVar2 = FUN_00467bc4(puVar3,param_2,param_5);
    if ((iVar2 == 0) && (iVar2 = FUN_00467bc4(puVar3,param_3,param_5), iVar2 == 0)) {
      FUN_00467bc4(puVar3,param_4,param_5);
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return;
}

