/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400293e4 */

longlong * FUN_1400293e4(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_R15;
  undefined7 uVar6;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  do {
    lVar4 = param_2;
    lVar5 = param_3;
    if (lVar4 == param_3) break;
    uVar1 = *(undefined1 *)(lVar4 + -1);
    uVar6 = (undefined7)((ulonglong)unaff_R15 >> 8);
    local_40 = (longlong *)FUN_1400d4020(1);
    cVar2 = FUN_140020392(CONCAT71(uVar6,uVar1) & 0xffffffff,local_48);
    unaff_R15 = CONCAT71(uVar6,cVar2);
    if ((local_40 != (longlong *)0x0) &&
       (puVar3 = (undefined8 *)(**(code **)(*local_40 + 0x10))(), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
    param_2 = lVar4 + -1;
    lVar5 = lVar4;
  } while (cVar2 != '\0');
  *param_1 = lVar5;
  return param_1;
}

