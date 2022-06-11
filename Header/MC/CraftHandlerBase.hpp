// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include  "SimpleSparseContainer.hpp"

#undef BEFORE_EXTRA

class CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERBASE
public:
    class CraftHandlerBase& operator=(class CraftHandlerBase const &) = delete;
    CraftHandlerBase(class CraftHandlerBase const &) = delete;
    CraftHandlerBase() = delete;
#endif


public:
    /*0*/ virtual ~CraftHandlerBase();
    /*1*/ virtual enum ItemStackNetResult handleConsumedItem(enum ContainerEnumName, unsigned char, class ItemStack const &);
    /*2*/ virtual enum ItemStackNetResult preHandleAction(enum ItemStackRequestActionType);
    /*3*/ virtual void endRequestBatch();
    /*4*/ virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &) = 0;
    /*5*/ virtual void _postCraftRequest(bool);
    /*6*/ virtual class Recipes const * _getLevelRecipes() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTHANDLERBASE
#endif
    MCAPI CraftHandlerBase(class ItemStackRequestActionCraftHandler &);
    MCAPI bool _isNonImplementedTrustClientResults() const;
    MCAPI enum ItemStackNetResult endRequest(enum ItemStackNetResult);
    MCAPI enum ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const &, enum ItemStackNetResult);
    MCAPI bool isCraftRequest();
    MCAPI void postRequest(bool);

//protected:
    MCAPI class std::tuple<enum ItemStackNetResult, class Recipe const *> _getRecipeFromNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _tryGetSparseContainer(enum ContainerEnumName);
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo);


protected:


};