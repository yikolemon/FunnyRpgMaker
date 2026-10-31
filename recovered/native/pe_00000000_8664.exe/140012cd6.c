/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140012cd6 */

undefined8 * FUN_140012cd6(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  cVar1 = thunk_FUN_140015aa0();
  if (cVar1 == '\0') {
    local_58 = CONCAT44(uStack_24,local_28);
    uStack_50 = CONCAT44(uStack_1c,uStack_20);
    local_48 = (undefined4)local_38;
    uStack_44 = local_38._4_4_;
    uStack_40 = (undefined4)uStack_30;
    uStack_3c = uStack_30._4_4_;
    FUN_1400158a8(param_1,&local_48,&local_58,0);
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}

