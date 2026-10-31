/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012e602 */

undefined8 FUN_14012e602(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 6;
  if (param_1 != (undefined4 *)0x0) {
    uVar6 = *param_1;
    uVar5 = param_1[3];
    iVar3 = FUN_14012e50d(uVar6,uVar5);
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    iVar4 = FUN_14012e50d(uVar1,uVar2);
    iVar3 = iVar3 - iVar4;
    if (iVar3 != 0) {
      iVar4 = FUN_14012b378(uVar1,iVar3);
      param_1[1] = -iVar4;
      iVar4 = FUN_14012b378(uVar2,iVar3);
      param_1[2] = -iVar4;
      uVar5 = FUN_14012b378(uVar5,iVar3);
      *param_1 = uVar5;
      uVar6 = FUN_14012b378(uVar6,iVar3);
      param_1[3] = uVar6;
      uVar7 = 0;
    }
  }
  return uVar7;
}

