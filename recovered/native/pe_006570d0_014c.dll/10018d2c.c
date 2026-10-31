/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018d2c */

void FUN_10018d2c(int *param_1)

{
  undefined1 auStack_180 [12];
  undefined4 local_174;
  undefined1 *local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined8 local_140;
  undefined1 *local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 *local_12c;
  undefined1 local_128 [256];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_180;
  local_18 = 0xffffffff;
  local_1c = &LAB_100591f0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100446d6();
  local_140 = *(undefined8 *)(param_1 + 0xc);
  local_138 = local_128;
  local_150 = param_1[8];
  iStack_14c = param_1[9];
  iStack_148 = param_1[10];
  iStack_144 = param_1[0xb];
  local_170 = (undefined1 *)*param_1;
  iStack_16c = param_1[1];
  iStack_168 = param_1[2];
  iStack_164 = param_1[3];
  local_160 = param_1[4];
  iStack_15c = param_1[5];
  iStack_158 = param_1[6];
  iStack_154 = param_1[7];
  local_134 = 0;
  local_12c = &LAB_100190fe;
  local_130 = 0xfa;
  local_18 = 2;
  FUN_1001909c(local_170,local_170 + iStack_16c);
  FUN_1001909c((int)local_140,local_140._4_4_ + (int)local_140);
  local_170 = local_138;
  local_140 = CONCAT44(local_140._4_4_,local_138 + iStack_16c);
  local_18 = 3;
  FUN_10018f06(&local_170);
  local_18 = 0xffffffff;
  if (local_138 != local_128) {
    thunk_FUN_10274120(local_138);
  }
  FUN_1022c200(local_174);
  ExceptionList = local_20;
  return;
}

