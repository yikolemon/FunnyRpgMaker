/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180221f08 */

undefined8 FUN_180221f08(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar5 = (uint *)FUN_18022cb75(lVar2 + 6,param_3);
  if (puVar5 != (uint *)0x0) {
    uVar3 = *puVar5;
    uVar1 = puVar5[1];
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if ((uVar3 != 0) && (iVar4 = FUN_18022cbd7((ulonglong)uVar3 + lVar2,param_2), iVar4 != 0)) {
      return 1;
    }
    uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if ((uVar3 != 0) && (iVar4 = FUN_18022cc3f(lVar2 + (ulonglong)uVar3,param_2), iVar4 != 0)) {
      return 0;
    }
  }
  return 0xffffffff;
}

