/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004bb32 */

ushort FUN_14004bb32(uint *param_1,uint param_2)

{
  ushort uVar1;
  uint *puVar2;
  ushort uVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0x56a;
  puVar4 = param_1;
  do {
    uVar7 = uVar6 >> 1;
    uVar6 = ~uVar7 + uVar6;
    puVar2 = puVar4 + uVar7 + 1;
    if (param_2 < puVar4[uVar7]) {
      uVar6 = uVar7;
      puVar2 = puVar4;
    }
    puVar4 = puVar2;
  } while (0 < (longlong)uVar6);
  if ((longlong)puVar4 - (longlong)param_1 == 0) {
    return 0xff;
  }
  lVar5 = (longlong)puVar4 - (longlong)param_1 >> 2;
  uVar1 = *(ushort *)((longlong)param_1 + lVar5 * 2 + 0x15a6);
  uVar3 = 0xff;
  if (param_2 < (uVar1 & 0xfff) + param_1[lVar5 + -1]) {
    uVar3 = uVar1 >> 0xc;
  }
  return uVar3;
}

