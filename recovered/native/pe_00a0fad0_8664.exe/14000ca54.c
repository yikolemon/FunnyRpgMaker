/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ca54 */

ulonglong FUN_14000ca54(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RSI;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar5 = (longlong)param_1 + (longlong)*(int *)(*param_1 + 4);
  uVar1 = *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10);
  if (uVar1 == 0) {
    local_28 = param_1;
    if (*(longlong *)(lVar5 + 0x50) != 0) {
      FUN_14000cc5a();
    }
    if ((param_2 == '\0') &&
       ((*(byte *)((longlong)local_28 + (longlong)*(int *)(*local_28 + 4) + 0x18) & 1) != 0)) {
      local_30 = *(longlong **)
                  (*(longlong *)((longlong)local_28 + (longlong)*(int *)(*local_28 + 4) + 0x40) + 8)
      ;
      (**(code **)(*local_30 + 8))();
      unaff_RSI = FUN_14000b3ff(local_38);
      if (local_30 != (longlong *)0x0) {
        puVar3 = (undefined8 *)(**(code **)(*local_30 + 0x10))();
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      plVar2 = *(longlong **)((longlong)local_28 + (longlong)*(int *)(*local_28 + 4) + 0x48);
      if ((*(byte **)plVar2[7] == (byte *)0x0) || (*(int *)plVar2[10] < 1)) {
        uVar4 = (**(code **)(*plVar2 + 0x30))();
      }
      else {
        uVar4 = (ulonglong)**(byte **)plVar2[7];
      }
      while ((int)uVar4 != -1) {
        if ((*(byte *)(*(longlong *)(unaff_RSI + 0x18) + (uVar4 & 0xff) * 2) & 0x48) == 0)
        goto code_r0x00014000cbb3;
        uVar4 = FUN_14000c9de(*(undefined8 *)
                               ((longlong)local_28 + (longlong)*(int *)(*local_28 + 4) + 0x48));
      }
      lVar5 = (longlong)*(int *)(*local_28 + 4);
      FUN_14000a9f0((longlong)local_28 + lVar5,
                    (uint)(*(longlong *)((longlong)local_28 + lVar5 + 0x48) == 0) << 2 |
                    *(uint *)((longlong)local_28 + lVar5 + 0x10) | 3,0);
    }
code_r0x00014000cbb3:
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                     *(int *)((longlong)local_28 + (longlong)*(int *)(*local_28 + 4) + 0x10) == 0);
  }
  else {
    uVar4 = 0;
    FUN_14000a9f0(lVar5,uVar1 | (uint)(*(longlong *)(lVar5 + 0x48) == 0) << 2 | 2,0);
  }
  return uVar4 & 0xffffffff;
}

