/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017d401 */

undefined8 FUN_18017d401(longlong *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  param_1[0x8db] = 0;
  param_1[0x8dc] = 0;
  param_1[0x8e7] = 0;
  param_1[0x8e8] = 0;
  param_1[0x8f3] = 0;
  param_1[0x8f4] = 0;
  param_1[0x8ff] = 0;
  param_1[0x900] = 0;
  *(undefined4 *)(param_1 + 0x90d) = 0;
  iVar3 = FUN_18017ace0(0,0);
  if (iVar3 == 0) {
    return 0;
  }
  do {
    bVar1 = FUN_18017c060(param_1);
    do {
      if (bVar1 != 0xda) {
        if (bVar1 != 0xdc) {
          if (bVar1 == 0xd9) {
            if ((int)param_1[0x906] == 0) {
              return 1;
            }
            FUN_18017e09a(param_1);
            return 1;
          }
          iVar3 = FUN_18017c0fe(param_1);
          if (iVar3 == 0) {
            return 1;
          }
          break;
        }
        iVar3 = FUN_180177505(*param_1);
        iVar4 = FUN_180177505(*param_1);
        if (iVar3 == 4) {
          if (iVar4 == *(int *)(*param_1 + 4)) break;
          pcVar5 = "bad DNL height";
        }
        else {
          pcVar5 = "bad DNL len";
        }
        FUN_1801765d0(pcVar5);
        return 0;
      }
      iVar3 = FUN_18017d674(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_18017d9a1(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      if ((char)param_1[0x905] == -1) {
        uVar2 = FUN_18017dfa6(param_1);
        *(undefined1 *)(param_1 + 0x905) = uVar2;
      }
      bVar1 = FUN_18017c060(param_1);
    } while ((bVar1 & 0xf8) != 0xd0);
  } while( true );
}

