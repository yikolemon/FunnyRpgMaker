/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e81ac */

int FUN_1407e81ac(ulonglong param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort unaff_retaddr;
  
  uVar5 = param_1 & 0xffffffff;
  if (((uint)unaff_retaddr < *(uint *)(param_1 + 0x18)) &&
     (uVar1 = *(ushort *)((ulonglong)*(uint *)(uVar5 + 0x20) + (ulonglong)unaff_retaddr * 2),
     uVar1 != 0xffff)) {
    if (uVar1 == 0xfffe) {
      uVar4 = *(uint *)(uVar5 + 0x30);
    }
    else {
      uVar4 = (uint)uVar1;
    }
    iVar2 = uVar4 * 0x2c + *(int *)(uVar5 + 0x2c);
  }
  else {
    iVar3 = FUN_1407eac09(uVar5);
    iVar2 = *(int *)(uVar5 + 0x30) * 0x2c + *(int *)(uVar5 + 0x2c);
    if (iVar3 != 0) {
      iVar2 = iVar3;
    }
  }
  return iVar2;
}

