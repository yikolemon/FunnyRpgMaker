/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e3047 */

void FUN_1400e3047(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  lVar5 = FUN_1400e2faf();
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  uVar6 = (ulonglong)(param_2 & 0x7ffff);
  lVar4 = *(longlong *)(lVar3 + 0x78);
  uVar1 = *(uint *)(lVar4 + uVar6 * 4);
  *(uint *)(lVar4 + uVar6 * 4) = uVar1 & 0xbfffffff;
  uVar7 = uVar1 + 0x100000 & 0x3ff00000;
  if (uVar7 == 0) {
    uVar7 = 0x100000;
  }
  *(uint *)(lVar4 + uVar6 * 4) = uVar7 | uVar1 & 0x80000000 | *(uint *)(lVar3 + 0x90) & 0xfffff;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(lVar3 + 0x90) = param_2 & 0x7ffff;
  *(int *)(lVar3 + 0x9c) = *(int *)(lVar3 + 0x9c) + 1;
  *(int *)(lVar3 + 0xa0) =
       *(int *)(lVar3 + 0xa0) +
       ((uint)*(ushort *)(lVar5 + 6) + iVar2) * ((uint)*(ushort *)(lVar5 + 4) + iVar2);
  *(undefined4 *)(lVar5 + 4) = 0;
  return;
}

