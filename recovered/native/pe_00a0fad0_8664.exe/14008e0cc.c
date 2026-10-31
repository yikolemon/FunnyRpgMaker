/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008e0cc */

undefined8 * FUN_14008e0cc(undefined8 *param_1,longlong *param_2,char param_3,char param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_a8 [56];
  longlong local_70 [2];
  longlong local_60;
  longlong *local_58;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_40 = param_1 + 1;
  *param_1 = 0;
  param_1[1] = 0;
  local_38 = param_1;
  bVar2 = FUN_14008e294(*param_2,param_2[1]);
  if (param_3 == '\0') {
    if (param_4 == '\x01' && bVar2 == 0) {
      FUN_14000169c(&local_60,"cannot create object from initializer list");
      FUN_14006bdec(local_a8,0x12d,&local_60,0);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_a8,&DAT_140196700);
    }
    bVar2 = bVar2 & param_4 != '\x02';
  }
  if (bVar2 == 0) {
    *(undefined1 *)local_38 = 2;
    local_60 = param_2[1];
    local_70[0] = *param_2;
    uVar3 = FUN_14008e36a();
    *local_40 = uVar3;
  }
  else {
    *(undefined1 *)local_38 = 1;
    uVar3 = FUN_1400635a8();
    *local_40 = uVar3;
    lVar1 = param_2[1];
    for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
      FUN_14008e2f2(lVar4,&local_60);
      FUN_14006c98c(*local_40,local_70,*(undefined8 *)(*local_58 + 8),*local_58 + 0x10);
      FUN_1400578a6(&local_60);
    }
  }
  return local_38;
}

