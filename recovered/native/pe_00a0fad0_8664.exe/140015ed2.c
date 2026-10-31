/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140015ed2 */

undefined8 FUN_140015ed2(longlong *param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  undefined1 local_150 [224];
  undefined1 local_70 [32];
  undefined1 local_50 [35];
  undefined1 local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140009eb0(local_168,1);
  (**(code **)(*param_1 + 0x58))(param_1,local_50,param_3,1);
  FUN_1400058b9(local_158,local_50);
  FUN_1400017de(local_50);
  if (*(int *)(param_3 + 0x1b4) < 0x20000000) {
    if (1 < *(int *)(param_3 + 0x1b4)) {
      uVar3 = FUN_1400052b8(local_158,"(");
      uVar3 = FUN_1400056d6(uVar3,*(undefined4 *)(param_3 + 0x1b0));
      FUN_1400052b8(uVar3,&DAT_140171497);
    }
  }
  else {
    FUN_1400052b8(local_158,"...");
  }
  bVar1 = *(byte *)(param_3 + 0x20);
  if (bVar1 == 1) {
    FUN_1400170f8(local_150,param_2);
  }
  else {
    local_2d = 1;
    FUN_1400170f8(local_150,local_70);
    local_29 = 1;
    local_2a = 1;
    FUN_140018136(local_50,&DAT_14017066d,local_70);
    local_2b = 1;
    local_2c = 1;
    FUN_14000ed8c(param_2,local_50,&DAT_1401705ae);
  }
  bVar4 = bVar1 ^ 1;
  local_2c = bVar4;
  local_2b = bVar4;
  bVar2 = bVar4;
  if (bVar1 == 0) {
    FUN_1400017de(local_50);
    local_2a = bVar4;
    local_29 = bVar4;
    FUN_1400017de(local_70);
    bVar4 = local_2a;
    bVar2 = local_29;
  }
  local_29 = bVar2;
  local_2a = bVar4;
  FUN_140009ff0(local_168);
  return param_2;
}

