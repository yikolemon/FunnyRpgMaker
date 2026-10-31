/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ec677 */

void FUN_1800ec677(char *param_1,undefined8 ***param_2)

{
  undefined8 ***pppuVar1;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 **local_88;
  longlong lStack_80;
  undefined8 local_78;
  ulonglong local_70 [9];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0xf;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  lStack_e0 = 0;
  local_98 = 0;
  FUN_18002266a(&uStack_d0);
  if (*param_1 == '\0') {
    FUN_180003216(&local_88,&local_108);
  }
  else {
    FUN_1800e56ee(param_1,&local_88,&DAT_18036a525,&local_108);
  }
  if (param_2 != &local_88) {
    pppuVar1 = &local_88;
    if (0xf < local_70[0]) {
      pppuVar1 = (undefined8 ***)local_88;
    }
    FUN_180017ca0(param_2,pppuVar1,local_78);
  }
  FUN_180001ef2(&local_88);
  if (*param_1 == '\0') {
    local_88 = (undefined8 ***)0x0;
    lStack_80 = 0;
    local_78 = 0;
    FUN_1800b037c(&local_88,(lStack_e0 - local_e8 >> 4) * -0x3333333333333333,&local_e8);
    FUN_1800b0332(local_70,&uStack_d0);
  }
  else {
    FUN_1800ec9b2(param_1,&local_88,"translations",&local_e8);
  }
  if (param_2 + 4 != &local_88) {
    FUN_1800ea918(param_2 + 4,local_88,(lStack_80 - (longlong)local_88 >> 4) * -0x3333333333333333);
  }
  FUN_1800bb340(param_2 + 7,local_70);
  FUN_18006ae42(&local_88);
  FUN_18006ae42(&local_e8);
  FUN_180001ef2(&local_108);
  return;
}

