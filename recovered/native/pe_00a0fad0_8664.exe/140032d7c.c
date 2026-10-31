/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140032d7c */

void FUN_140032d7c(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 0x31d) == '\x01') {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x31d) != '\x02') goto LAB_140032da1;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x4d) = uVar2;
LAB_140032da1:
  plVar1 = *(longlong **)(param_1 + 0x308);
  for (plVar5 = *(longlong **)(param_1 + 0x300); plVar5 != plVar1; plVar5 = plVar5 + 2) {
    lVar4 = *plVar5;
    if (*(char *)(lVar4 + 0x4b) == '\x01') {
      *(undefined8 *)(lVar4 + 0x18) = 0;
      if (*(ulonglong *)(lVar4 + 0x20) < 0x10) {
        puVar3 = (undefined1 *)(lVar4 + 8);
      }
      else {
        puVar3 = *(undefined1 **)(lVar4 + 8);
      }
      *puVar3 = 0;
      lVar4 = *plVar5;
    }
    if (*(longlong *)(lVar4 + 0x18) == 0) {
      *(undefined1 *)(lVar4 + 0x31a) = 0;
      *(undefined1 *)(*plVar5 + 0x4a) = 0;
      lVar4 = *plVar5;
    }
    *(longlong *)(lVar4 + 0x348) = param_1;
    FUN_140032d7c(*plVar5);
  }
  return;
}

