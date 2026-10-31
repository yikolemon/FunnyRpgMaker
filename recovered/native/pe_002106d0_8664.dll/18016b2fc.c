/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016b2fc */

float FUN_18016b2fc(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  lVar2 = DAT_180419160;
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(DAT_180419160 + 0x24f8);
  iVar3 = *(int *)(lVar1 + 0x6c);
  fVar7 = 0.0;
  if (0 < iVar3) {
    uVar5 = 0;
    lVar6 = 0;
    do {
      if (((*(uint *)(*(longlong *)(lVar1 + 0x50) + (uVar5 >> 5 & 0x7ffffff) * 4) >>
            ((uint)uVar5 & 0x1f) & 1) != 0) &&
         ((*(byte *)(*(longlong *)(lVar1 + 0x18) + 2 + lVar6) & 4) != 0)) {
        uVar4 = FUN_18016a483(lVar1,uVar5 & 0xffffffff);
        local_58 = 0xbf800000;
        FUN_1801023ca(local_48,uVar4,0,1);
        fVar7 = (float)FUN_180102463(fVar7,local_48[0]);
        iVar3 = *(int *)(lVar1 + 0x6c);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x74;
    } while ((longlong)uVar5 < (longlong)iVar3);
  }
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
    return *(float *)(lVar2 + 0xe18) + *(float *)(lVar2 + 0xe18) + fVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

