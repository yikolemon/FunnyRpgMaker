/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180020c99 */

undefined8 *
FUN_180020c99(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 *param_6,uint param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 local_c8 [16];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 uVar8;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_1;
  FUN_180020e7a(local_c8);
  uVar4 = 0;
  uVar6 = param_7;
  while( true ) {
    puVar7 = param_3;
    cVar3 = FUN_180020ee9(param_3,param_4,local_c8,param_5,uVar4 | uVar6,param_3);
    puVar2 = local_98;
    uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
    if (cVar3 == '\0') break;
    puVar1 = local_a0;
    if ((param_7 >> 0xb & 1) == 0) {
      for (; uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20), puVar1 != puVar2; puVar1 = puVar1 + 1)
      {
        FUN_180003bf2(param_2,*puVar1);
      }
    }
    puVar5 = param_6;
    if (0xf < (ulonglong)param_6[3]) {
      puVar5 = (undefined8 *)*param_6;
    }
    FUN_18002117c(local_c8,&local_58,param_2,puVar5,param_6[2] + (longlong)puVar5,
                  CONCAT44(uVar8,uVar6));
    puVar5 = local_b8 + 1;
    if (local_b0 == local_b8) {
      puVar5 = local_68;
    }
    param_3 = (undefined1 *)*puVar5;
    param_2 = local_58;
    if (((param_7 >> 0xc & 1) != 0) || (param_3 == param_4)) break;
    puVar5 = local_b8;
    if (local_b0 == local_b8) {
      puVar5 = &local_70;
    }
    if ((undefined1 *)*puVar5 != param_3) {
      uVar6 = uVar6 | 0x100;
    }
    uVar4 = (uint)((undefined1 *)*puVar5 == param_3) << 0xd;
  }
  if ((param_7 >> 0xb & 1) == 0) {
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      FUN_180003bf2(param_2,*param_3);
    }
  }
  *local_50 = param_2;
  FUN_180004cea(&local_b8);
  return local_50;
}

