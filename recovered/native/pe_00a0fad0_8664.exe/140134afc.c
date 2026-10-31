/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140134afc */

void FUN_140134afc(undefined1 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  puVar4 = (undefined2 *)*param_2;
  local_58 = param_5;
  puVar5 = puVar4;
  local_50 = param_4;
  if (param_1 != (undefined1 *)0x0) {
    do {
      puVar6 = local_48;
      if (3 < param_3) {
        puVar6 = param_1;
      }
      uVar2 = FUN_1401261c0(puVar6,*puVar5,local_50,local_58);
      if (uVar2 == 0xffffffffffffffff) {
        *param_2 = puVar4;
        goto LAB_140134c2a;
      }
      if (puVar6 != param_1) {
        if (param_3 < uVar2) goto LAB_140134bc2;
        FUN_140135ff0(param_1,puVar6,uVar2);
      }
      if (uVar2 != 0) {
        if (param_1[uVar2 - 1] == '\0') goto LAB_140134bbc;
        puVar4 = puVar5 + 1;
      }
      param_3 = param_3 - uVar2;
      param_1 = param_1 + uVar2;
      puVar5 = puVar5 + 1;
    } while( true );
  }
  lVar3 = FUN_1401261c0(local_48,*puVar4,param_4,param_5);
  uVar1 = local_58;
  while ((lVar3 != -1 && ((lVar3 == 0 || (local_48[lVar3 + -1] != '\0'))))) {
    puVar4 = puVar4 + 1;
    lVar3 = FUN_1401261c0(local_48,*puVar4,param_4,uVar1);
  }
LAB_140134c2a:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_40 ^ (ulonglong)auStack_78);
LAB_140134bbc:
  puVar4 = (undefined2 *)0x0;
LAB_140134bc2:
  *param_2 = puVar4;
  goto LAB_140134c2a;
}

