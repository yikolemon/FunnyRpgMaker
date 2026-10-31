/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c256a */

void FUN_1800c256a(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  DWORD *pDVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_b0 [2];
  undefined8 ***local_a0 [3];
  ulonglong local_88;
  DWORD local_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60 [2];
  DWORD local_4c [3];
  
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  FUN_1800247f0(local_60);
  for (uVar8 = 0; uVar8 < 2; uVar8 = uVar8 + 1) {
    if ((DAT_180417980 != DAT_180417978) &&
       (*(longlong *)(**(longlong **)(param_1 + 8) + 0x18 + uVar8 * 0x28) != 0)) {
      lVar3 = **(longlong **)(param_1 + 8) + uVar8 * 0x28;
      if (*(ulonglong *)(lVar3 + 0x20) < 0x10) {
        lVar3 = lVar3 + 8;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 8);
      }
      FUN_180001e92(local_a0,lVar3);
      ppppuVar4 = local_a0;
      if (0xf < local_88) {
        ppppuVar4 = (undefined8 ****)local_a0[0];
      }
      FUN_18005affb(&local_80,ppppuVar4);
      FUN_180061fd7(&local_80);
      cVar2 = FUN_18001ba14(local_a0,&local_80);
      if (cVar2 == '\0') {
        FUN_1800c297c(local_60,local_b0,&local_80,local_a0);
        pDVar5 = &local_80;
        if (0xf < local_68) {
          pDVar5 = (DWORD *)CONCAT44(uStack_7c,local_80);
        }
        FUN_1800bf9b2(uVar8 * 0x28 + **(longlong **)(param_1 + 8),pDVar5,local_70);
        local_4c[0] = GetCurrentThreadId();
        FUN_1800c2b22(&DAT_180417a20,local_b0,local_4c);
        *(undefined1 *)(local_b0[0] + 0x14) = 1;
      }
      FUN_180001ef2(&local_80);
      FUN_180001ef2(local_a0);
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  (*DAT_180417b38)(*(undefined8 *)*puVar1,*(undefined1 *)puVar1[1],*(undefined8 *)puVar1[2],
                   *(undefined8 *)puVar1[3],*(undefined8 *)puVar1[4]);
  local_80 = GetCurrentThreadId();
  FUN_1800c2b22(&DAT_180417a20,local_a0);
  *(undefined1 *)((longlong)local_a0[0] + 0x14) = 0;
  for (uVar7 = 0; uVar7 < 2; uVar7 = uVar7 + 1) {
    lVar3 = **(longlong **)(param_1 + 8);
    uVar8 = (ulonglong)uVar7;
    if (*(ulonglong *)(lVar3 + 0x20 + uVar8 * 0x28) < 0x10) {
      local_a0[0] = (undefined8 ***)(lVar3 + uVar8 * 0x28 + 8);
    }
    else {
      local_a0[0] = *(undefined8 ****)(lVar3 + 8 + uVar8 * 0x28);
    }
    cVar2 = FUN_1800c290c(local_60,local_a0);
    if (cVar2 != '\0') {
      lVar3 = **(longlong **)(param_1 + 8);
      if (*(ulonglong *)(lVar3 + 0x20 + uVar8 * 0x28) < 0x10) {
        lVar3 = lVar3 + uVar8 * 0x28 + 8;
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 8 + uVar8 * 0x28);
      }
      FUN_180001e92(local_a0,lVar3);
      FUN_1800c3220(local_60,&local_80,local_a0);
      lVar3 = CONCAT44(uStack_7c,local_80);
      if (*(ulonglong *)(lVar3 + 0x58) < 0x10) {
        lVar6 = lVar3 + 0x40;
      }
      else {
        lVar6 = *(longlong *)(lVar3 + 0x40);
      }
      FUN_1800bf9b2(uVar8 * 0x28 + **(longlong **)(param_1 + 8),lVar6,*(undefined8 *)(lVar3 + 0x50))
      ;
      FUN_180001ef2(local_a0);
    }
  }
  FUN_1800248c8(local_60,local_60,*(undefined8 *)(local_60[0] + 8));
  thunk_FUN_1802464a0(local_60[0],0x60);
  return;
}

