/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003be8f */

undefined8
FUN_14003be8f(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_188 [8];
  undefined1 local_180 [224];
  undefined1 local_a0 [32];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_48 = param_4;
  FUN_140019bc0(local_188,1);
  puVar2 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  FUN_14003cda6(local_188,&local_68);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_14003cda6(local_188,&local_80);
    if (CONCAT44(uStack_5c,uStack_60) + CONCAT44(uStack_64,local_68) <
        CONCAT44(uStack_74,uStack_78) + CONCAT44(uStack_7c,local_80)) {
      FUN_1400058b9(local_188,local_48);
      local_58 = local_70;
      local_68 = local_80;
      uStack_64 = uStack_7c;
      uStack_60 = uStack_78;
      uStack_5c = uStack_74;
    }
    FUN_14001818a(*puVar2,local_a0,0);
    FUN_1400058b9(local_188,local_a0);
    FUN_1400017de(local_a0);
  }
  FUN_1400170f8(local_180,param_1);
  FUN_140019cf4(local_188);
  FUN_1400017de(local_48);
  return param_1;
}

