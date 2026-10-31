/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177a9a */

undefined8 FUN_180177a9a(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1[3];
  uVar5 = ((int *)*param_1)[1] * *(int *)*param_1;
  uVar7 = 0;
  puVar2 = (undefined1 *)FUN_180178f9d(uVar5,param_3,0);
  if (puVar2 == (undefined1 *)0x0) {
    FUN_1801765d0("outofmem");
  }
  else {
    if (param_3 == 3) {
      if (uVar5 != 0) {
        uVar3 = 0;
        puVar4 = puVar2;
        do {
          uVar6 = (ulonglong)*(byte *)(lVar1 + uVar3);
          *puVar4 = *(undefined1 *)(param_2 + uVar6 * 4);
          puVar4[1] = *(undefined1 *)(param_2 + 1 + uVar6 * 4);
          puVar4[2] = *(undefined1 *)(param_2 + 2 + uVar6 * 4);
          puVar4 = puVar4 + 3;
          uVar3 = uVar3 + 1;
        } while (uVar5 != uVar3);
      }
    }
    else if (uVar5 != 0) {
      uVar3 = 0;
      do {
        *(undefined4 *)(puVar2 + uVar3 * 4) =
             *(undefined4 *)(param_2 + (ulonglong)*(byte *)(lVar1 + uVar3) * 4);
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    thunk_FUN_180290e40(lVar1);
    param_1[3] = puVar2;
    uVar7 = 1;
  }
  return uVar7;
}

