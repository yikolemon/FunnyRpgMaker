/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116ba3 */

void FUN_180116ba3(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x2030) = *(uint *)(DAT_180419160 + 0x2030) | 0x2000;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined8 *)(lVar4 + 0x20a8) = *param_1;
  *(undefined8 *)(lVar4 + 0x20b0) = uVar1;
  *(undefined8 *)(lVar4 + 0x20b8) = uVar2;
  *(undefined8 *)(lVar4 + 0x20c0) = uVar3;
  *(undefined8 *)(lVar4 + 0x20c8) = param_1[4];
  return;
}

