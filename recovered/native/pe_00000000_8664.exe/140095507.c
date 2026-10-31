/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095507 */

float FUN_140095507(int param_1)

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
  
  lVar3 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  FUN_1400917f5(8,&local_64,&local_68);
  bVar7 = param_1 != 0;
  iVar1 = bVar7 + 0x202 + (uint)bVar7;
  iVar2 = bVar7 + 0x201 + (uint)bVar7;
  if (*(int *)(lVar3 + 0x2250) == 3) {
    iVar1 = bVar7 + 0x27f + (uint)bVar7;
    iVar2 = bVar7 + 0x27e + (uint)bVar7;
  }
  iVar5 = FUN_14009185f(iVar1,local_64,local_68);
  iVar6 = FUN_14009185f(iVar2,local_64,local_68);
  fVar8 = (float)iVar5 - (float)iVar6;
  if ((((fVar8 != 0.0) || (NAN(fVar8))) && (cVar4 = FUN_140091d93(iVar2), cVar4 != '\0')) &&
     (cVar4 = FUN_140091d93(iVar1), cVar4 != '\0')) {
    fVar8 = 0.0;
  }
  if (DAT_140f17b40 != (local_60 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_60 ^ (ulonglong)auStack_88);
  }
  return fVar8;
}

