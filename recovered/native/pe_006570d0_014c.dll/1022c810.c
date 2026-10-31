/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c810 */

void FUN_1022c810(ulonglong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_18;
  int local_14;
  
  GetSystemTimePreciseAsFileTime(&local_18);
  uVar5 = local_18 + 0x2ac18000;
  uVar3 = (local_14 + -0x19db1de) - (uint)(local_18 < 0xd53e8000);
  lVar1 = (ulonglong)uVar3 * 0xe57a42bd + ((ulonglong)uVar5 * 0xe57a42bd >> 0x20);
  uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar4 = (int)((ulonglong)uVar5 * 0xd6bf94d5 >> 0x20) +
          (uint)CARRY4((uint)((ulonglong)uVar5 * 0xd6bf94d5),(uint)lVar1);
  uVar2 = (ulonglong)uVar3 * 0xd6bf94d5 + (ulonglong)CONCAT14(CARRY4(uVar6,uVar4),uVar6 + uVar4) >>
          0x17;
  *param_1 = uVar2;
  *(uint *)(param_1 + 1) = (uVar5 + (int)uVar2 * -10000000) * 100;
  return;
}

