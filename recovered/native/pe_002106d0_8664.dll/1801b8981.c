/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b8981 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b8981(void)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_88;
  cVar2 = FUN_18014c2cb("Progress Bars");
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x8a5,"Widgets/Progress Bars");
    fVar4 = DAT_180404a10 * DAT_1802bb8d8;
    lVar3 = FUN_180107ee8();
    _DAT_18041fe60 = fVar4 * *(float *)(lVar3 + 0x18) + _DAT_18041fe60;
    fVar4 = DAT_1802de794;
    if ((DAT_1802de794 <= _DAT_18041fe60) ||
       (fVar4 = DAT_18032925c, _DAT_18041fe60 <= DAT_18032925c)) {
      DAT_180404a10 = -DAT_180404a10;
      _DAT_18041fe60 = fVar4;
    }
    fVar4 = DAT_1802ac570;
    if (_DAT_18041fe60 <= DAT_1802ac570) {
      fVar4 = _DAT_18041fe60;
    }
    fVar4 = (float)(~-(uint)(_DAT_18041fe60 < 0.0) & (uint)fVar4);
    local_58[0] = 0;
    FUN_180136e21(fVar4,local_58,0);
    lVar3 = FUN_18010128e();
    FUN_180119893(0,*(undefined4 *)(lVar3 + 100));
    FUN_1801330a5("Progress Bar");
    FUN_1801bf199(local_58,"%d/%d",(int)(fVar4 * _DAT_180329260),0x6d9);
    local_60 = 0;
    FUN_180136e21(fVar4,&local_60,local_58);
    local_60 = 0;
    dVar1 = (double)FUN_180107f34();
    FUN_180136e21((uint)(float)dVar1 ^ _DAT_1802b0ce0,&local_60,"Searching..");
    lVar3 = FUN_18010128e();
    FUN_180119893(0,*(undefined4 *)(lVar3 + 100));
    FUN_1801330a5("Indeterminate");
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_88);
}

