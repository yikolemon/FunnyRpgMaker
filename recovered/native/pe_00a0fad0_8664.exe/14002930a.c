/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002930a */

undefined8 * FUN_14002930a(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 unaff_R15;
  undefined7 uVar5;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  puVar4 = param_2;
  if (param_2 != param_3) {
    do {
      uVar1 = *param_2;
      uVar5 = (undefined7)((ulonglong)unaff_R15 >> 8);
      local_40 = (longlong *)FUN_1400d4020(1);
      cVar2 = FUN_140020392(CONCAT71(uVar5,uVar1) & 0xffffffff,local_48);
      unaff_R15 = CONCAT71(uVar5,cVar2);
      if ((local_40 != (longlong *)0x0) &&
         (puVar3 = (undefined8 *)(**(code **)(*local_40 + 0x10))(), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      puVar4 = param_2;
    } while ((cVar2 != '\0') && (param_2 = param_2 + 1, puVar4 = param_3, param_2 != param_3));
  }
  *param_1 = puVar4;
  return param_1;
}

