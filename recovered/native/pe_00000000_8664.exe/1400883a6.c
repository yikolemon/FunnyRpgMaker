/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400883a6 */

void FUN_1400883a6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x1608);
  FUN_1400dab18(*(undefined8 *)(lVar2 + 800),param_1,param_2,param_3);
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(lVar2 + 800) + 0xa8) + -0x10 +
           (longlong)*(int *)(*(longlong *)(lVar2 + 800) + 0xa0) * 0x10);
  uVar3 = puVar1[1];
  *(undefined8 *)(lVar2 + 0x2b8) = *puVar1;
  *(undefined8 *)(lVar2 + 0x2c0) = uVar3;
  return;
}

