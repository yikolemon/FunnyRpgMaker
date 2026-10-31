/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009b368 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14009b368(undefined8 *param_1)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  uVar1 = *(ulonglong *)*param_1;
  FUN_140097d30(*(int **)param_1[1],(longlong *)param_1[2]);
  __acrt_stdio_free_buffer_nolock(*(undefined8 **)param_1[1]);
  LOCK();
  *(uint *)(*(longlong *)param_1[1] + 0x14) = *(uint *)(*(longlong *)param_1[1] + 0x14) & 0xfffff81f
  ;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    lVar4 = *(longlong *)param_1[4];
    uVar5 = (undefined4)(uVar1 & 0xfffffffffffffffe);
    if (lVar4 == 0) {
      pvVar2 = _calloc_base(uVar1 & 0xfffffffffffffffe,1);
      FUN_1400a1290((LPVOID)0x0);
      if (pvVar2 == (LPVOID)0x0) {
        _DAT_140142be8 = _DAT_140142be8 + 1;
        return 0xffffffff;
      }
      plVar3 = *(longlong **)param_1[1];
      LOCK();
      *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x140;
      UNLOCK();
      *(undefined4 *)(plVar3 + 4) = uVar5;
      *plVar3 = (longlong)pvVar2;
      plVar3[1] = (longlong)pvVar2;
      goto LAB_14009b439;
    }
    plVar3 = *(longlong **)param_1[1];
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x180;
    UNLOCK();
    *(undefined4 *)(plVar3 + 4) = uVar5;
  }
  else {
    plVar3 = *(longlong **)param_1[1];
    lVar4 = (longlong)plVar3 + 0x1c;
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x400;
    UNLOCK();
    *(undefined4 *)(plVar3 + 4) = 2;
  }
  *plVar3 = lVar4;
  plVar3[1] = lVar4;
LAB_14009b439:
  *(undefined4 *)(plVar3 + 2) = 0;
  return 0;
}

