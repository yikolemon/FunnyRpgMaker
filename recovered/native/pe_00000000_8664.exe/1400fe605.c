/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fe605 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fe605(void)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  cVar2 = FUN_1400c51fb("Progress Bars");
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x8a5,"Widgets/Progress Bars");
    fVar4 = DAT_140f181b0 * DAT_140210024;
    lVar3 = FUN_140081200();
    _DAT_140f315b0 = fVar4 * *(float *)(lVar3 + 0x18) + _DAT_140f315b0;
    fVar4 = DAT_14020ff9c;
    if ((DAT_14020ff9c <= _DAT_140f315b0) ||
       (fVar4 = DAT_140e8d5ec, _DAT_140f315b0 <= DAT_140e8d5ec)) {
      DAT_140f181b0 = -DAT_140f181b0;
      _DAT_140f315b0 = fVar4;
    }
    fVar4 = DAT_1401c86c8;
    if (_DAT_140f315b0 <= DAT_1401c86c8) {
      fVar4 = _DAT_140f315b0;
    }
    fVar4 = (float)(~-(uint)(_DAT_140f315b0 < 0.0) & (uint)fVar4);
    local_58[0] = 0;
    FUN_1400afd51(fVar4,local_58,0);
    lVar3 = FUN_14007a54a();
    FUN_140092bab(0,*(undefined4 *)(lVar3 + 100));
    FUN_1400abfd5("Progress Bar");
    FUN_140104e1d(local_58,"%d/%d",(int)(fVar4 * _DAT_140e8d5f0),0x6d9);
    local_60 = 0;
    FUN_1400afd51(fVar4,&local_60,local_58);
    local_60 = 0;
    dVar1 = (double)FUN_14008124c();
    FUN_1400afd51((uint)(float)dVar1 ^ _DAT_1401c8590,&local_60,"Searching..");
    lVar3 = FUN_14007a54a();
    FUN_140092bab(0,*(undefined4 *)(lVar3 + 100));
    FUN_1400abfd5("Indeterminate");
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_88);
}

