/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011bb00 */

void __fastcall FUN_1011bb00(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  puVar1 = (undefined4 *)param_2[7];
  puVar2 = (undefined4 *)param_2[8];
  if ((*(byte *)(DAT_1039d74c + 0x27b5) & 4) != 0) {
    uVar3 = 0;
    uVar5 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar5 = *puVar2;
    }
    if (puVar1 != (undefined4 *)0x0) {
      uVar3 = *puVar1;
    }
    FUN_100f99e6("[docking] DockNodeTreeMerge: 0x%08X + 0x%08X back into parent 0x%08X\n",uVar3,
                 uVar5,*param_2);
  }
  uVar5 = param_2[0x11];
  uVar3 = param_2[0x12];
  FUN_10129cd6(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1011b9ab();
    FUN_1011ba73();
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_1011b9ab();
    FUN_1011ba73();
  }
  FUN_1012bd02();
  param_2[0x2a] = param_2[0x2a] & 0xfffffe00;
  uVar4 = param_2[2] & 0xfffc078f;
  param_2[0x1f] = *(undefined4 *)(param_3 + 0x7c);
  param_2[0x12] = uVar3;
  param_2[0x11] = uVar5;
  param_2[2] = uVar4;
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = uVar4 | puVar1[2] & 0x3f870;
  }
  param_2[2] = uVar4;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = uVar4 | puVar2[2] & 0x3f870;
  }
  param_2[2] = uVar4;
  if (puVar1 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = puVar1[3];
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar6 = uVar6 | puVar2[3];
  }
  param_2[3] = uVar6;
  param_2[4] = uVar4 | param_2[1] | uVar6;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10119f45();
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_10119f45();
    return;
  }
  return;
}

