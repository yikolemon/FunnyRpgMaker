/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002918a */

undefined8 * FUN_14002918a(undefined8 *param_1,char *param_2,char *param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulonglong unaff_R15;
  undefined7 uVar5;
  bool bVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_42;
  char local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  pcVar4 = param_2;
  if (param_2 != param_3) {
    bVar6 = param_4 == '\0';
    local_41 = param_4;
    do {
      cVar1 = *param_2;
      uVar5 = (undefined7)(unaff_R15 >> 8);
      if (local_41 == '\0') {
        local_50 = (longlong *)FUN_1400d4020(1);
        local_42 = 1;
        uVar2 = FUN_140020392(CONCAT71(uVar5,cVar1) & 0xffffffff,local_58);
        unaff_R15 = (ulonglong)uVar2;
      }
      else {
        unaff_R15 = CONCAT71(uVar5,cVar1 == local_41);
      }
      local_42 = bVar6;
      if (((local_41 == '\0') && (local_50 != (longlong *)0x0)) &&
         (puVar3 = (undefined8 *)(**(code **)(*local_50 + 0x10))(), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      pcVar4 = param_2;
    } while (((char)unaff_R15 == '\0') &&
            (param_2 = param_2 + 1, pcVar4 = param_3, param_2 != param_3));
  }
  *param_1 = pcVar4;
  return param_1;
}

