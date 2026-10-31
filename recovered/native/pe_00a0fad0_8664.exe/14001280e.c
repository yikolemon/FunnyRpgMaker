/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001280e */

undefined8
FUN_14001280e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 *puVar3;
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  undefined1 local_150 [224];
  undefined1 local_70 [32];
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_3;
  FUN_140009eb0(local_168,1);
  uVar2 = FUN_1400052b8(local_158,&DAT_1401728dd);
  uVar2 = FUN_1400058b9(uVar2,local_50);
  FUN_1400052b8(uVar2,&DAT_1401728bd);
  puVar1 = (undefined8 *)param_5[1];
  for (puVar3 = (undefined8 *)*param_5; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))
              (param_1,local_70,*puVar3,
               CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff);
    FUN_1400058b9(local_158,local_70);
    FUN_1400017de(local_70);
  }
  FUN_1400170f8(local_150,param_2);
  FUN_140009ff0(local_168);
  FUN_1400017de(local_50);
  FUN_140016e5c(param_5);
  return param_2;
}

