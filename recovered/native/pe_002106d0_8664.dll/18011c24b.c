/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011c24b */

float FUN_18011c24b(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  lVar3 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_88;
  FUN_1801184dd(8,&local_64,&local_68);
  bVar7 = param_1 != 0;
  iVar1 = bVar7 + 0x202 + (uint)bVar7;
  iVar2 = bVar7 + 0x201 + (uint)bVar7;
  if (*(int *)(lVar3 + 0x2250) == 3) {
    iVar1 = bVar7 + 0x27f + (uint)bVar7;
    iVar2 = bVar7 + 0x27e + (uint)bVar7;
  }
  iVar5 = FUN_180118547(iVar1,local_64,local_68);
  iVar6 = FUN_180118547(iVar2,local_64,local_68);
  fVar8 = (float)iVar5 - (float)iVar6;
  if ((((fVar8 != 0.0) || (NAN(fVar8))) && (cVar4 = FUN_180118a7b(iVar2), cVar4 != '\0')) &&
     (cVar4 = FUN_180118a7b(iVar1), cVar4 != '\0')) {
    fVar8 = 0.0;
  }
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStack_88);
  }
  return fVar8;
}

