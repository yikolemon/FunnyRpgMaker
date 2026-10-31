/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140032b5e */

void FUN_140032b5e(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_150 [64];
  undefined1 local_110 [64];
  undefined1 local_d0 [64];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar3 = FUN_14003317c(*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140));
  if ((1 < lVar3) &&
     (lVar4 = FUN_140033229(*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140)),
     1 < lVar3 - lVar4)) {
    FUN_140006874(local_90,param_1 + 8);
    FUN_1400332d6(local_150,local_90);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_150,&DAT_14017a528);
  }
  plVar5 = *(longlong **)(param_1 + 0x300);
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar5 == plVar1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      FUN_140032b5e(*plVar5);
      lVar3 = lVar3 + (ulonglong)(*(longlong *)(*plVar5 + 0x18) == 0);
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar1);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x338);
  if (uVar2 != 0) {
    if (*(ulonglong *)(param_1 + 0x340) < uVar2 && *(ulonglong *)(param_1 + 0x340) != 0) {
      FUN_14000169c(local_70,"Required min options greater than required max options");
      FUN_1400334f8(local_110,local_70,0x6f);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_110,&DAT_14017a528);
    }
    if ((ulonglong)((*(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138) >> 3) + lVar3)
        < uVar2) {
      FUN_14000169c(local_50,"Required min options greater than number of available options");
      FUN_1400334f8(local_d0,local_50,0x6f);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_d0,&DAT_14017a528);
    }
  }
  return;
}

