/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140027c93 */

void FUN_140027c93(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  FUN_14002781a(&local_58,param_2,&local_78,param_3);
  if ((*param_1 == param_1[1]) ||
     (cVar2 = FUN_14000d7b8(param_1[1] + -0x38,&DAT_140171466), cVar2 == '\0')) {
    if (0x20 < (ulonglong)(lStack_50 - local_58)) {
      for (uVar4 = 0; uVar4 < (lStack_50 - local_58 >> 5) - 1U; uVar4 = uVar4 + 1) {
        FUN_140028a54(param_1);
        FUN_140020e9e(param_1[1] + -0x50,local_58,(longlong)(uVar4 * 0x20 + 0x20) >> 5);
        FUN_140017200(param_1[1] + -0x38,"++",2);
      }
    }
    goto LAB_140027eb4;
  }
  uVar3 = lStack_50 - local_58 >> 5;
  uVar4 = 2;
  if (2 < uVar3) {
    uVar4 = uVar3;
  }
  while( true ) {
    lVar5 = param_1[1];
    uVar3 = *(longlong *)(lVar5 + -0x48) - *(longlong *)(lVar5 + -0x50) >> 5;
    if (uVar3 < uVar4) break;
    FUN_140029b98(param_1,lVar5 + -0x50);
    lVar5 = param_1[1];
    FUN_1400017de(*(longlong *)(lVar5 + -0x48) + -0x20);
    plVar1 = (longlong *)(lVar5 + -0x48);
    *plVar1 = *plVar1 + -0x20;
  }
  uVar4 = lStack_50 - local_58 >> 5;
  if (uVar4 < 2) goto LAB_140027eb4;
  uVar4 = uVar4 - 1;
  if (uVar3 <= uVar4) {
    uVar4 = uVar3;
  }
  if (uVar4 == 0) {
    uVar3 = 0;
LAB_140027e34:
    bVar6 = uVar3 == uVar4;
    uVar4 = uVar3;
    if (bVar6) goto code_r0x000140027e3e;
    while (lVar5 = param_1[1],
          uVar3 + 1 < (ulonglong)(*(longlong *)(lVar5 + -0x48) - *(longlong *)(lVar5 + -0x50) >> 5))
    {
      FUN_140029b98(param_1,lVar5 + -0x50);
      lVar5 = param_1[1];
      FUN_1400017de(*(longlong *)(lVar5 + -0x48) + -0x20);
      plVar1 = (longlong *)(lVar5 + -0x48);
      *plVar1 = *plVar1 + -0x20;
    }
  }
  else {
    uVar3 = 0;
    lVar5 = 0;
    do {
      cVar2 = FUN_1400170b4(*(longlong *)(param_1[1] + -0x50) + lVar5,local_58 + lVar5);
      if (cVar2 == '\0') goto LAB_140027e34;
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar4 != uVar3);
code_r0x000140027e3e:
    FUN_14001eeaf(param_1[1] + -0x50);
    param_1[1] = param_1[1] + -0x50;
    uVar3 = uVar4;
  }
  for (; uVar3 < (lStack_50 - local_58 >> 5) - 1U; uVar3 = uVar3 + 1) {
    FUN_140028a54(param_1);
    FUN_140020e9e(param_1[1] + -0x50,local_58,(longlong)(uVar3 * 0x20 + 0x20) >> 5);
    FUN_140017200(param_1[1] + -0x38,"++",2);
  }
LAB_140027eb4:
  FUN_140028a54(param_1);
  lVar5 = param_1[1];
  if ((longlong *)(lVar5 + -0x50) != &local_58) {
    FUN_14000eeca();
    *(longlong *)(lVar5 + -0x50) = local_58;
    *(longlong *)(lVar5 + -0x48) = lStack_50;
    *(undefined8 *)(lVar5 + -0x40) = local_48;
    local_58 = 0;
    lStack_50 = 0;
    local_48 = 0;
    lVar5 = param_1[1];
  }
  FUN_140017200(lVar5 + -0x38,"++",2);
  FUN_14000eeca(&local_58);
  FUN_1400017de(&local_78);
  return;
}

