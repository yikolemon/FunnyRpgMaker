/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140072472 */

undefined8 *
FUN_140072472(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 unaff_RBX;
  
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = (undefined8 *)FUN_1401174fc();
  param_1[10] = puVar1;
  if ((undefined1 *)puVar1[1] == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)puVar1[1];
  }
  *(undefined1 *)(param_1 + 0xb) = uVar3;
  if ((undefined1 *)*puVar1 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)*puVar1;
  }
  *(undefined1 *)((longlong)param_1 + 0x59) = uVar3;
  FUN_1401366a0((longlong)param_1 + 0x5a,0,0x200);
  *(undefined1 *)((longlong)param_1 + 0x25a) = param_3;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  lVar2 = FUN_1400d3680(0x210);
  param_1[0x4c] = lVar2;
  param_1[0x4e] = 0x200;
  param_1[0x4f] = 0x20f;
  FUN_1401366a0(lVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3) & 0xffffffff,0x200);
  *(undefined1 *)(lVar2 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  FUN_14003179c(param_2);
  return param_1;
}

