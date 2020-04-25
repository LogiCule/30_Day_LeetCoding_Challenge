class LRUCache {
  int capacity_;
  unordered_map<int, list<pair<int, int>>::iterator> map_;
  list<pair<int, int>> cache_; 
 public:
  LRUCache(int capacity) {
    capacity_ = capacity;
    map_.reserve(capacity);
  }

  int get(int key) {
    if (!map_.count(key)) {
      return -1;
    }
    
    int value = (*map_[key]).second;
    if (key == cache_.back().first) {
      return value;
    }
    
    cache_.erase(map_[key]);
    cache_.emplace_back(key, value); 
    map_[key] = prev(cache_.end());
    
    return value;
  }

  void put(int key, int value) {
    if (map_.count(key)) {
      if (key == cache_.back().first) {
        map_[key]->second = value;
        return;
      }
      cache_.erase(map_[key]);
    } else if (map_.size() == capacity_) {
      map_.erase(cache_.front().first); 
      cache_.pop_front();
    }
    
    cache_.emplace_back(key, value);
    map_[key] = prev(cache_.end());
  }
};
