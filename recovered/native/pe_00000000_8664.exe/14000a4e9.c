/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000a4e9 */

ulonglong Unwind_14000a4e9(void)

{
  int iVar1;
  undefined4 uVar2;
  char *in_RAX;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  longlong unaff_R13;
  uint unaff_R14D;
  ulonglong unaff_R15;
  undefined8 uVar8;
  ulonglong uVar6;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *(longlong *)(unaff_RSI + 0x10) = *(longlong *)(unaff_RSI + 0x10) + -8;
  do {
    uVar3 = *(ulonglong *)(unaff_RBP + -0x38);
    if (uVar3 == 0) {
      uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_14000a7af:
      FUN_14000bbee(unaff_RBP + -0x50);
      return uVar3 & 0xffffffff;
    }
    uVar5 = (uint)uVar3 & 0x1f;
    uVar6 = (ulonglong)uVar5;
    uVar5 = 1 << ((char)uVar5 - 1U & 0x1f);
    if (uVar6 == 0) {
      uVar5 = unaff_R14D;
    }
    lVar7 = (uVar3 >> 5) * 4 + *(longlong *)(unaff_RBP + -0x50);
    uVar3 = (longlong)uVar3 >> 0x3f & unaff_R15;
    puVar4 = (uint *)(lVar7 + uVar3 + (uVar6 - 1 >> 5) * 4);
    if (uVar6 == 0) {
      puVar4 = (uint *)((uVar3 - 4) + lVar7);
    }
    if ((*puVar4 & uVar5) == 0) {
      iVar1 = FUN_140006f22();
      *(int *)(unaff_RDI + 0x40) = iVar1;
      if (iVar1 == 0xd) {
        iVar1 = FUN_140006f22();
        *(int *)(unaff_RDI + 0x40) = iVar1;
        if ((iVar1 != 0xb) || (*(char *)(unaff_RDI + 0xe9) == '\0')) {
          if (iVar1 == 4) {
            if ((*(int *)(unaff_RDI + 0xd8) != 0x2e) && (*(longlong *)(unaff_RDI + 0xe0) != -1)) {
              lVar7 = unaff_RDI + 0x98;
              if (0xf < *(ulonglong *)(unaff_RDI + 0xb0)) {
                lVar7 = *(longlong *)(unaff_RDI + 0x98);
              }
              *(undefined1 *)(lVar7 + *(longlong *)(unaff_RDI + 0xe0)) = 0x2e;
            }
            FUN_14000f108(*(undefined8 *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + -8) + 8),
                          unaff_RBP + -0x10,unaff_RDI + 0x98);
            *(longlong *)(unaff_RSI + 0x20) = *(longlong *)(unaff_RBP + -0x10) + 0x40;
            iVar1 = FUN_140006f22();
            *(int *)(unaff_RDI + 0x40) = iVar1;
            if (iVar1 == 0xc) {
              uVar2 = FUN_140006f22();
              *(undefined4 *)(unaff_RDI + 0x40) = uVar2;
              goto code_r0x00014000a334;
            }
            uVar8 = FUN_1400027d2(unaff_RBP + 0x70,"object separator");
            FUN_140009ca6(uVar8,unaff_RBP + 0x50,0xc,unaff_RBP + 0x70);
            *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(unaff_RDI + 0x78);
            uVar8 = *(undefined8 *)(unaff_RDI + 0x70);
            *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)(unaff_RDI + 0x68);
            *(undefined8 *)(unaff_RBP + -0x28) = uVar8;
            uVar8 = FUN_140009aba(unaff_RBP + -0x10,0x65,(undefined8 *)(unaff_RBP + -0x30),
                                  unaff_RBP + 0x50,0);
            uVar8 = FUN_140009f7a(uVar8,unaff_RBP + 0x30);
            uVar5 = FUN_14000babc(uVar8,*(undefined8 *)(unaff_RDI + 0x68),unaff_RBP + 0x30,
                                  unaff_RBP + -0x10);
            uVar3 = (ulonglong)uVar5;
            FUN_14000109c(unaff_RBP + 0x30);
            FUN_14000a054(unaff_RBP + -0x10);
            FUN_14000109c(unaff_RBP + 0x50);
            FUN_14000109c(unaff_RBP + 0x70);
          }
          else {
            uVar8 = FUN_1400027d2(unaff_RBP + 0x70,"object key");
            FUN_140009ca6(uVar8,unaff_RBP + 0x50,4,unaff_RBP + 0x70);
            *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(unaff_RDI + 0x78);
            uVar8 = *(undefined8 *)(unaff_RDI + 0x70);
            *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)(unaff_RDI + 0x68);
            *(undefined8 *)(unaff_RBP + -0x28) = uVar8;
            uVar8 = FUN_140009aba(unaff_RBP + -0x10,0x65,(undefined8 *)(unaff_RBP + -0x30),
                                  unaff_RBP + 0x50,0);
            uVar8 = FUN_140009f7a(uVar8,unaff_RBP + 0x30);
            uVar5 = FUN_14000babc(uVar8,*(undefined8 *)(unaff_RDI + 0x68),unaff_RBP + 0x30,
                                  unaff_RBP + -0x10);
            uVar3 = (ulonglong)uVar5;
            FUN_14000109c(unaff_RBP + 0x30);
            FUN_14000a054(unaff_RBP + -0x10);
            FUN_14000109c(unaff_RBP + 0x50);
            FUN_14000109c(unaff_RBP + 0x70);
          }
          goto LAB_14000a7af;
        }
      }
      else if (iVar1 != 0xb) {
        uVar8 = FUN_1400027d2(unaff_RBP + 0x70,"object");
        FUN_140009ca6(uVar8,unaff_RBP + 0x50,0xb,unaff_RBP + 0x70);
        *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(unaff_RDI + 0x78);
        uVar8 = *(undefined8 *)(unaff_RDI + 0x70);
        *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)(unaff_RDI + 0x68);
        *(undefined8 *)(unaff_RBP + -0x28) = uVar8;
        uVar8 = FUN_140009aba(unaff_RBP + -0x10,0x65,(undefined8 *)(unaff_RBP + -0x30),
                              unaff_RBP + 0x50,0);
        uVar8 = FUN_140009f7a(uVar8,unaff_RBP + 0x30);
        uVar5 = FUN_14000babc(uVar8,*(undefined8 *)(unaff_RDI + 0x68),unaff_RBP + 0x30,
                              unaff_RBP + -0x10);
        uVar3 = (ulonglong)uVar5;
        FUN_14000109c(unaff_RBP + 0x30);
        FUN_14000a054(unaff_RBP + -0x10);
        FUN_14000109c(unaff_RBP + 0x50);
        FUN_14000109c(unaff_RBP + 0x70);
        goto LAB_14000a7af;
      }
    }
    else {
      iVar1 = FUN_140006f22();
      *(int *)(unaff_RDI + 0x40) = iVar1;
      if (iVar1 == 0xd) {
        iVar1 = FUN_140006f22();
        *(int *)(unaff_RDI + 0x40) = iVar1;
        if ((iVar1 != 10) || (*(char *)(unaff_RDI + 0xe9) == '\0')) {
code_r0x00014000a334:
          uVar5 = *(int *)(unaff_RDI + 0x40) - 1;
          if (uVar5 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00014000a34b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (*(code *)(*(int *)(unaff_R13 + (ulonglong)uVar5 * 4) + unaff_R13))();
            return uVar3;
          }
          uVar8 = FUN_1400027d2(unaff_RBP + 0x70,"value");
          FUN_140009ca6(uVar8,unaff_RBP + 0x50,0x10,unaff_RBP + 0x70);
          *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(unaff_RDI + 0x78);
          uVar8 = *(undefined8 *)(unaff_RDI + 0x70);
          *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)(unaff_RDI + 0x68);
          *(undefined8 *)(unaff_RBP + -0x28) = uVar8;
          uVar8 = FUN_140009aba(unaff_RBP + -0x10,0x65,(undefined8 *)(unaff_RBP + -0x30),
                                unaff_RBP + 0x50,0);
          uVar8 = FUN_140009f7a(uVar8,unaff_RBP + 0x30);
          uVar5 = FUN_14000babc(uVar8,*(undefined8 *)(unaff_RDI + 0x68),unaff_RBP + 0x30,
                                unaff_RBP + -0x10);
          uVar3 = (ulonglong)uVar5;
          FUN_14000109c(unaff_RBP + 0x30);
          *(undefined ***)(unaff_RBP + -0x10) =
               nlohmann::json_abi_v3_12_0::detail::exception::vftable;
          *(undefined ***)(unaff_RBP + 0x10) = std::exception::vftable;
          FUN_1401905b0();
          *(undefined ***)(unaff_RBP + -0x10) = std::exception::vftable;
          FUN_1401905b0();
          FUN_14000109c(unaff_RBP + 0x50);
          FUN_14000109c(unaff_RBP + 0x70);
          goto LAB_14000a7af;
        }
      }
      else if (iVar1 != 10) {
        uVar8 = FUN_1400027d2(unaff_RBP + 0x70,"array");
        FUN_140009ca6(uVar8,unaff_RBP + 0x50,10,unaff_RBP + 0x70);
        *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(unaff_RDI + 0x78);
        uVar8 = *(undefined8 *)(unaff_RDI + 0x70);
        *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)(unaff_RDI + 0x68);
        *(undefined8 *)(unaff_RBP + -0x28) = uVar8;
        uVar8 = FUN_140009aba(unaff_RBP + -0x10,0x65,(undefined8 *)(unaff_RBP + -0x30),
                              unaff_RBP + 0x50,0);
        uVar8 = FUN_140009f7a(uVar8,unaff_RBP + 0x30);
        uVar5 = FUN_14000babc(uVar8,*(undefined8 *)(unaff_RDI + 0x68),unaff_RBP + 0x30,
                              unaff_RBP + -0x10);
        uVar3 = (ulonglong)uVar5;
        FUN_14000109c(unaff_RBP + 0x30);
        FUN_14000a054(unaff_RBP + -0x10);
        FUN_14000109c(unaff_RBP + 0x50);
        FUN_14000109c(unaff_RBP + 0x70);
        goto LAB_14000a7af;
      }
    }
    *(longlong *)(unaff_RSI + 0x10) = *(longlong *)(unaff_RSI + 0x10) + -8;
    FUN_14000cd62();
  } while( true );
}

