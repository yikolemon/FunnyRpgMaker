/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140032e18 */

void FUN_140032e18(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14003362e();
  if (*(char *)(param_1 + 0x4e) == '\0') {
    lVar2 = param_2[1];
    lVar3 = *param_2;
    *(undefined1 *)(param_1 + 0x4e) = 1;
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
      local_48 = lVar2 - lVar3 >> 5;
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
    }
  }
  else if ((*(char *)(param_1 + 0x4f) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x324);
    local_38 = *(undefined8 *)(param_1 + 0x288);
    *(undefined8 *)(param_1 + 0x288) = 0;
    local_48 = *(ulonglong *)(param_1 + 0x278);
    uStack_40 = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    FUN_140032a72(param_1);
    *(undefined4 *)(param_1 + 0x324) = uVar1;
    *(undefined1 *)(param_1 + 0x4e) = 1;
    if ((ulonglong *)(param_1 + 0x278) != &local_48) {
      FUN_14003184c();
      *(ulonglong *)(param_1 + 0x278) = local_48;
      *(undefined8 *)(param_1 + 0x280) = uStack_40;
      *(undefined8 *)(param_1 + 0x288) = local_38;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
    }
    FUN_14003184c(&local_48);
  }
  local_48 = local_48 & 0xffffffffffffff00;
  if (*param_2 != param_2[1]) {
    do {
      FUN_14003366a(param_1,param_2,&local_48);
    } while (*param_2 != param_2[1]);
  }
  FUN_14003d6c6(param_1);
  FUN_140038806(param_1);
  FUN_140038ab4(param_1);
  FUN_140038b82(param_1,0,0);
  FUN_140038c80(param_1);
  FUN_1400338ae(param_1);
  return;
}

